// fichero 8801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8801;

Registro8801 crear_registro8801(int id) {
    Registro8801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
