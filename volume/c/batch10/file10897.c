// fichero 10897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10897;

Registro10897 crear_registro10897(int id) {
    Registro10897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
