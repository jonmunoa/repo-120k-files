// fichero 34613 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34613;

Registro34613 crear_registro34613(int id) {
    Registro34613 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
