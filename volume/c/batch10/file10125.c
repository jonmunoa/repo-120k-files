// fichero 10125 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10125;

Registro10125 crear_registro10125(int id) {
    Registro10125 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
