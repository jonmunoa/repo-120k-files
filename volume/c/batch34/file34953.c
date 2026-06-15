// fichero 34953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34953;

Registro34953 crear_registro34953(int id) {
    Registro34953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
