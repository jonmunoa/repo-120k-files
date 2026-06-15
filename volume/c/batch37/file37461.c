// fichero 37461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37461;

Registro37461 crear_registro37461(int id) {
    Registro37461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
