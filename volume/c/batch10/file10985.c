// fichero 10985 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10985;

Registro10985 crear_registro10985(int id) {
    Registro10985 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
