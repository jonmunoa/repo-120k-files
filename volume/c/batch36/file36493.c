// fichero 36493 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36493;

Registro36493 crear_registro36493(int id) {
    Registro36493 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
