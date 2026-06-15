// fichero 19829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19829;

Registro19829 crear_registro19829(int id) {
    Registro19829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
