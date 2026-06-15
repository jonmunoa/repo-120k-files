// fichero 34649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34649;

Registro34649 crear_registro34649(int id) {
    Registro34649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
