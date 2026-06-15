// fichero 16425 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16425;

Registro16425 crear_registro16425(int id) {
    Registro16425 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
