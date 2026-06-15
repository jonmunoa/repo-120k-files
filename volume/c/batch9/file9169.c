// fichero 9169 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9169;

Registro9169 crear_registro9169(int id) {
    Registro9169 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
