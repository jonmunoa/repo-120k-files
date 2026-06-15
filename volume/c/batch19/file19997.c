// fichero 19997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19997;

Registro19997 crear_registro19997(int id) {
    Registro19997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
