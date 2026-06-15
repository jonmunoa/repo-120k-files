// fichero 24781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24781;

Registro24781 crear_registro24781(int id) {
    Registro24781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
