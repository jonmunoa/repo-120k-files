// fichero 44317 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44317;

Registro44317 crear_registro44317(int id) {
    Registro44317 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
