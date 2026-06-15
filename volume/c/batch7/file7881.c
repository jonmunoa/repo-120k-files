// fichero 7881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7881;

Registro7881 crear_registro7881(int id) {
    Registro7881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
