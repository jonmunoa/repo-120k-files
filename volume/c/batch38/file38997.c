// fichero 38997 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38997;

Registro38997 crear_registro38997(int id) {
    Registro38997 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
