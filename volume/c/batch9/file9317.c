// fichero 9317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9317;

Registro9317 crear_registro9317(int id) {
    Registro9317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
