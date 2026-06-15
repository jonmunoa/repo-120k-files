// fichero 36541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36541;

Registro36541 crear_registro36541(int id) {
    Registro36541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
