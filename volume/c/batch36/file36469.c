// fichero 36469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36469;

Registro36469 crear_registro36469(int id) {
    Registro36469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
