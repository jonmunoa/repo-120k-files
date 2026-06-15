// fichero 24241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24241;

Registro24241 crear_registro24241(int id) {
    Registro24241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
