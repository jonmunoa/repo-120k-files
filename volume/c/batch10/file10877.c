// fichero 10877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10877;

Registro10877 crear_registro10877(int id) {
    Registro10877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
