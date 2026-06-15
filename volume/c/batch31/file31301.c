// fichero 31301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31301;

Registro31301 crear_registro31301(int id) {
    Registro31301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
