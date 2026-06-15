// fichero 10893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10893;

Registro10893 crear_registro10893(int id) {
    Registro10893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
