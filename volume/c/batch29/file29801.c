// fichero 29801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29801;

Registro29801 crear_registro29801(int id) {
    Registro29801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
