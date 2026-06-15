// fichero 24801 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24801;

Registro24801 crear_registro24801(int id) {
    Registro24801 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
