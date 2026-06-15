// fichero 26817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26817;

Registro26817 crear_registro26817(int id) {
    Registro26817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
