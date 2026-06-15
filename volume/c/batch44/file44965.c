// fichero 44965 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44965;

Registro44965 crear_registro44965(int id) {
    Registro44965 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
