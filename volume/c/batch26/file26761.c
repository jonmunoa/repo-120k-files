// fichero 26761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26761;

Registro26761 crear_registro26761(int id) {
    Registro26761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
