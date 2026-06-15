// fichero 10417 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10417;

Registro10417 crear_registro10417(int id) {
    Registro10417 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
