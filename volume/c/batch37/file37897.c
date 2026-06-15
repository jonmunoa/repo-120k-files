// fichero 37897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37897;

Registro37897 crear_registro37897(int id) {
    Registro37897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
