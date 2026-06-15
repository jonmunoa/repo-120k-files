// fichero 35241 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35241;

Registro35241 crear_registro35241(int id) {
    Registro35241 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
