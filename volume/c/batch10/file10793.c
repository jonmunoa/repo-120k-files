// fichero 10793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10793;

Registro10793 crear_registro10793(int id) {
    Registro10793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
