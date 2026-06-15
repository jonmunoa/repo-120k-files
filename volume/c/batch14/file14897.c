// fichero 14897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14897;

Registro14897 crear_registro14897(int id) {
    Registro14897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
