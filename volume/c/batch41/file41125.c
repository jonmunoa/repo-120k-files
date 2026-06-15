// fichero 41125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41125;

Registro41125 crear_registro41125(int id) {
    Registro41125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
