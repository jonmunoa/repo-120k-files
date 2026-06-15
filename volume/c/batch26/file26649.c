// fichero 26649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26649;

Registro26649 crear_registro26649(int id) {
    Registro26649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
