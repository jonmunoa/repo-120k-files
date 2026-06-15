// fichero 9281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9281;

Registro9281 crear_registro9281(int id) {
    Registro9281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
