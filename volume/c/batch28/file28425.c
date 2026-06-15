// fichero 28425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28425;

Registro28425 crear_registro28425(int id) {
    Registro28425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
