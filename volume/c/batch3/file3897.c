// fichero 3897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3897;

Registro3897 crear_registro3897(int id) {
    Registro3897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
