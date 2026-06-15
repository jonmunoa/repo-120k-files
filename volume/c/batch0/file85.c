// fichero 85 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro85;

Registro85 crear_registro85(int id) {
    Registro85 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
