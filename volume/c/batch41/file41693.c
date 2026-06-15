// fichero 41693 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41693;

Registro41693 crear_registro41693(int id) {
    Registro41693 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
