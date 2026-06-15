// fichero 34245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34245;

Registro34245 crear_registro34245(int id) {
    Registro34245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
