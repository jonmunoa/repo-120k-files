// fichero 36769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36769;

Registro36769 crear_registro36769(int id) {
    Registro36769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
