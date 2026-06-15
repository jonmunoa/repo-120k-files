// fichero 44761 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44761;

Registro44761 crear_registro44761(int id) {
    Registro44761 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
