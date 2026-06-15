// fichero 38897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38897;

Registro38897 crear_registro38897(int id) {
    Registro38897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
