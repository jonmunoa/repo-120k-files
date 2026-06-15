// fichero 26661 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26661;

Registro26661 crear_registro26661(int id) {
    Registro26661 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
