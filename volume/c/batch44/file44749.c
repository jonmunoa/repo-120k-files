// fichero 44749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44749;

Registro44749 crear_registro44749(int id) {
    Registro44749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
