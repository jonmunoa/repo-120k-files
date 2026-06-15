// fichero 36213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36213;

Registro36213 crear_registro36213(int id) {
    Registro36213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
