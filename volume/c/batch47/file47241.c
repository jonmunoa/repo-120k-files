// fichero 47241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47241;

Registro47241 crear_registro47241(int id) {
    Registro47241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
