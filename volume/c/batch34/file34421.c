// fichero 34421 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34421;

Registro34421 crear_registro34421(int id) {
    Registro34421 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
