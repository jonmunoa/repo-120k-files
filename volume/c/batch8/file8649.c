// fichero 8649 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8649;

Registro8649 crear_registro8649(int id) {
    Registro8649 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
