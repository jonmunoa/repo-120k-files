// fichero 31697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31697;

Registro31697 crear_registro31697(int id) {
    Registro31697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
