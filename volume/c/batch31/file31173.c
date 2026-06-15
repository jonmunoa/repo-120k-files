// fichero 31173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31173;

Registro31173 crear_registro31173(int id) {
    Registro31173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
