// fichero 41189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41189;

Registro41189 crear_registro41189(int id) {
    Registro41189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
