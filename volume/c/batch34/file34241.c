// fichero 34241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34241;

Registro34241 crear_registro34241(int id) {
    Registro34241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
