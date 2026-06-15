// fichero 43801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43801;

Registro43801 crear_registro43801(int id) {
    Registro43801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
